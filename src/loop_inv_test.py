#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
循环不变量Test脚本 - 支持单DatasetTest和不同Model日志分类
"""

import os
import json
from main import MainConfig, FunctionProcessor

def list_files_os(folder_path):
    file_names = []
    for entry in os.listdir(folder_path):
        full_path = os.path.join(folder_path, entry)
        if os.path.isfile(full_path):
            file_names.append(entry)
    return file_names

def get_dataset_config(dataset_name, model_name="default"):
    """获取不同Dataset的配置"""
    configs = {
        'NLA_lipus': {
            'input_dir': './input/NLA_lipus',
            'log_dir': f'./log/NLA_lipus/{model_name}',
            'root_dir': 'NLA_lipus',
            'preconditions': {
                'main1': 'a >= n && n == 0',
                'main2': 'x > 0 && y > 0',
                'main3': 'x > 0 && y > 0',
                'main4': 'x > 0 && y > 0',
                'main5': 'x >= 1 && y >= 1',
                'main6': 'x >= 1 && y >= 1',
                'main7': 'x >= 1 && y >= 1',
                'main8': 'x >= 1 && y >= 1',
                'main9': 'z >= 0 && z <= 10 && k > 0 && k <= 10',
                'main10': 'z >= 0 && z <= 10 && k > 0 && k <= 10',
                'main11': 'z >= 0 && z <= 10 && k > 0 && k <= 10',
                'main12': 'A >= 0 && B >= 1',
                'main13': 'x >= 1 && y >= 1',
                'main14': 'a >= 0 && b >= 0',
                'main15': 'k >= 0 && k <= 30',
                'main16': 'k >= 0 && k <= 30',
                'main17': 'k >= 0 && k <= 30',
                'main18': 'k >= 0 && k <= 30',
                'main19': 'k >= 0 && k <= 30',
                'main20': 'n >= 0',
                'main22': 'x >= 0',
                'main23': 'x >= 0 && x <= 10',
                'main24': 'x >= 0 && y >= 0',
                'main25': 'x >= 0',
                'main26': 'x == 1 && x <= y',
                'main27': 'x >= 0 && y >= x',
                'main28': 'x >= 0 && y >= x',
                'main29': 'x >= 0 && y >= 0 && n >= 0'
            },
            'config_params': {
                'auto_annotation': False,
                'debug': True,
                'only_loop': True,
                'generlization': False,
                'use_db': False
            }
        },
        'sv-comp_autospec': {
            'input_dir': './input/sv-comp_autospec',
            'log_dir': f'./log/sv-comp_autospec/{model_name}',
            'root_dir': 'sv-comp_autospec',
            'preconditions': {
                'foo003': '0 <= n && n < 1000000',
                'foo005': 'n > 0 && y == n',
                'foo006': '0 <= k && k <= 1',
                'foo007': '0 < n',
                'foo008': 'a < 1000000 && 0 <= b && b <= 1000000',
                'foo009': 'i >= 0 && j >= 0',
                'foo0010': '0 <= i && i < 1000000 && j >= 0',
                'foo0011': 'INT_MIN < n0 && n0 < INT_MAX && INT_MIN < n1 && n1 < INT_MAX',
                'foo0012': 'l > 0 && l < INT_MAX && n < INT_MAX',
                'foo0013': 'INT_MIN < n && n < INT_MAX && INT_MIN < m && m < INT_MAX && INT_MIN < l && l < INT_MAX && 3*n <= m + l',
                'foo0014': '0 <= n && n < 1000',
                'foo0015': 'y <= 1000000',
                'foo0016': 'n > 0',
                'foo0019': 'n <= INT_MAX',
                'foo0020': '0 <= n && n < 2 && 0 <= v',
                'foo0021': 'n < INT_MAX && k == n',
            },
            'config_params': {  
                'auto_annotation': False,
                'debug': True,
                'only_loop': True,
                'generlization': False,
                'use_db': False
            }
        },
        'syGus_code2inv': {
            'input_dir': './input/syGus_code2inv',
            'log_dir': f'./log/syGus_code2inv/{model_name}',
            'root_dir': 'syGus_code2inv',
            'preconditions': {
                'foo7': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
                'foo8': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
                'foo9': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
                'foo10': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
                'foo11': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
                'foo12': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
                'foo13': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
                'foo14': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
                'foo38': 'n > 0',
                'foo39': 'n > 0',
                'foo40': 'n > 0',
                'foo41': 'n > 0',
                'foo42': 'n > 0',
                'foo43': 'n > 0',
                'foo44': 'n > 0',
                'foo45': 'n > 0',
                'foo46': 'n > 0',
                'foo47': 'n > 0',
                'foo48': 'n > 0',
                'foo49': 'n > 0',
                'foo53': 'n > 0',
                'foo54': 'n > 0',
                'foo55': 'n > 0',
                'foo56': 'n > 0',
                'foo57': 'n > 0',
                'foo58': 'n > 0',
                'foo59': 'n > 0',
                'foo60': 'n > 0',
                'foo61': 'n > 0',
                'foo62': 'n > 0',
                'foo71': 'y >= 0 && y <= 127',
                'foo72': 'y >= 0 && y <= 127',
                'foo73': 'y >= 0 && y <= 127',
                'foo74': 'y >= 0 && y <= 127',
                'foo75': 'y >= 0 && y <= 127',
                'foo76': 'y >= 0 && y <= 127',
                'foo77': 'x >= y && y >= 0',
                'foo78': 'x >= y && y >= 0',
                'foo79': 'x >= y && y >= 0',
                'foo80': 'x >= y && y >= 0',
                'foo82': 'x >= y && y >= 0',
                'foo94': 'n >= 0 && k >= 0',
                'foo100': 'n >= 0',
                'foo106': 'j < 1 && a <= m',
                'foo107': 'a <= m',
                'foo108': 'a <= m',
                'foo110': 'n >= 1',
                'foo111': 'n >= 1',
                'foo112': 'n >= 1',
                'foo113': 'n >= 1',
                'foo133': 'n >= 0', 
            },
            'config_params': {
                'auto_annotation': False,
                'debug': True,
                'only_loop': True,
                'generlization': False,
                'use_db': False
            }
        },
        'syGus_mask': {
            'input_dir': './input/syGus_mask',
            'log_dir': f'./log/syGus_mask/{model_name}',
            'root_dir': 'syGus_mask',
            'preconditions': {
                'foo7': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
                'foo8': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
                'foo9': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
                'foo10': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
                'foo11': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
                'foo12': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
                'foo13': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
                'foo14': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
                'foo38': 'n > 0',
                'foo39': 'n > 0',
                'foo40': 'n > 0',
                'foo41': 'n > 0',
                'foo42': 'n > 0',
                'foo43': 'n > 0',
                'foo44': 'n > 0',
                'foo45': 'n > 0',
                'foo46': 'n > 0',
                'foo47': 'n > 0',
                'foo48': 'n > 0',
                'foo49': 'n > 0',
                'foo53': 'n > 0',
                'foo54': 'n > 0',
                'foo55': 'n > 0',
                'foo56': 'n > 0',
                'foo57': 'n > 0',
                'foo58': 'n > 0',
                'foo59': 'n > 0',
                'foo60': 'n > 0',
                'foo61': 'n > 0',
                'foo62': 'n > 0',
                'foo71': 'y >= 0 && y <= 127',
                'foo72': 'y >= 0 && y <= 127',
                'foo73': 'y >= 0 && y <= 127',
                'foo74': 'y >= 0 && y <= 127',
                'foo75': 'y >= 0 && y <= 127',
                'foo76': 'y >= 0 && y <= 127',
                'foo77': 'x >= y && y >= 0',
                'foo78': 'x >= y && y >= 0',
                'foo79': 'x >= y && y >= 0',
                'foo80': 'x >= y && y >= 0',
                'foo82': 'x >= y && y >= 0',
                'foo94': 'n >= 0 && k >= 0',
                'foo100': 'n >= 0',
                'foo106': 'j < 1 && a <= m',
                'foo107': 'a <= m',
                'foo108': 'a <= m',
                'foo110': 'n >= 1',
                'foo111': 'n >= 1',
                'foo112': 'n >= 1',
                'foo113': 'n >= 1',
                'foo133': 'n >= 0', 
            },
            'config_params': {
                'auto_annotation': False,
                'debug': True,
                'only_loop': True,
                'generlization': False,
                'use_db': False,
                'pass_count': 1
            }
        },
        'oopsla_hola': {
            'input_dir': './input/oopsla_hola',
            'log_dir': f'./log/oopsla_hola/{model_name}',
            'root_dir': 'oopsla_hola',
            'preconditions': {
                'foo03': 'l > 0 && n > l',
                'foo015': 'n > 0 && k > n',
                'foo018': 'flag > 0',
                'foo019': 'n >= 0 && m >= 0 && m < n',
                'foo020': 'x + y == k && n > 0',
                'foo021': 'n > 0 && n < 10',
                'foo023': 'n >= 0',
                'foo027': 'l > 0',
                'foo031': 'm + 1 < n',
                'foo035': 'n > 0',
                'foo037': 'n > 0',
                'foo038': 'n > 0',
                'foo039': 'MAXPATHLEN <= 0',
                'foo040': 'flag > 0',
                'foo041': 'n > 0',
                'foo043': 'x != y',
            },
            'config_params': {
                'auto_annotation': False,
                'debug': True,
                'only_loop': True,
                'generlization': False,
                'use_db': True,
                'think': False,
                'pass_count': 1,
                'refine_count': 3
            }
        },
        'loop': {
            'input_dir': './input/loop',
            'log_dir': f'./log/loop/{model_name}',
            'root_dir': 'loop',
            'preconditions': {
               'foo4': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
               'foo5': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
               'foo6': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
               'foo7': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
               'foo8': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
               'foo9': 'x >= 0 && x <= 10 && y <= 10 && y >= 0',
               'foo10': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
               'foo11': 'x >= 0 && x <= 2 && y <= 2 && y >= 0',
               'foo18': 'n > 0',
               'foo27': '0 <= y && y <= 127',
               'foo28': '0 <= y && y <= 127',
               'foo29': '0 <= y && y <= 127',
               'foo30': 'x >= y  && y >= 0',
               'foo38': 'n >= 0 && k >= 0',
               'foo43': 'n >= 1',
               'foo53': 'l > 0 && n > l',
               'foo56': '0 <= k && k <= 1',
               'foo59': 'flag > 0',
               'foo61': 'x + y == k && n > 0',
               'foo62': 'n >= 0',
               'foo67': 'n > 0',
               'foo69': 'flag > 0'
            },
            'config_params': {
                'auto_annotation': False,
                'debug': True,
                'only_loop': True,
                'generlization': False,
                'use_db': False,
                'think': True,
                'template': True,
                'refine_count': 3,
                'pass_count': 1
            }
        },
        'numer-s': {
            'input_dir': './input/numer-s',
            'log_dir': f'./log/numer-s/{model_name}',
            'root_dir': 'numer-s',
            'preconditions': {
                'hoo4': 'x > 0 && y > 0 && z > 0 && w > 0',
                'hoo5': 'x > 0 && y > 0 && z > 0 && w > 0',
                'hoo6': 'x > 0 && y > 0 && z > 0 && w > 0',
                'hoo13': 'x == 1 || x == 2',
                'hoo14': 'k >= 0 && k <= 1',
                'hoo17': 'x < y && y <= 20000001',
                'hoo18': 'xa + ya > 0',
                'hoo20': 'nlen == idBitLength / 32 && idBitLength >= 0 && material_length >= 0',
                'hoo21': 'X > 0 && Y > 0 && X >= Y',
                'hoo23': 'a > 0 && b > 0',
                'hoo24': 'n > 0',
                'hoo25': 'n > 0',
                'hoo26': 'a % 2 == 0 && a > 0',
                'hoo27': 'x >= 0 && y >= 1',
                'hoo28': 'a >= 1 && b >= 1',
                'hoo29': 'n > 0',
                'hoo30': 'a % 2 == 0 && a > 0',
                'hoo31': 'A >= 1 && (R-1)*(R-1) < A && A <= R*R && A%2 == 1',
                'hoo32': 'x >= 0 && x <= 10',
                'hoo33': 'a >= 1 && b >= 1',
                'hoo34': 'a % 2 == 0 && a > 0',
                'hoo35': 'n > 0',
                'hoo36': 'n > 0',
                'hoo37': 'a >= 0 && b >= 0',
                'hoo38': 'a > 2',
                'hoo39': 'a > 2',
                'hoo40': 'a > 2'

        },
        'config_params': {
                'auto_annotation': False,
                'debug': True,
                'only_loop': True,
                'generlization': False,
                'use_db': False,
                'think': True,
                'template': True,
                'refine_count': 3,
                'pass_count': 5
                }

        }
    }
    
    return configs.get(dataset_name, configs['NLA_lipus'])

def test_dataset(dataset_name, model_name="gpt-4o"):
    """Test指定Dataset"""
    config = get_dataset_config(dataset_name, model_name)
    
    name_list = list_files_os(config['input_dir'])
    log_dir = config['log_dir']
    
    # 初始化计数器
    syntax_count = {1: 0, 3: 0, 5: 0}
    valid_count = {1: 0, 3: 0, 5: 0}
    satisfy_count = {1: 0, 3: 0, 5: 0}
    
    count = len(name_list)
    print(f"🔍 Dataset: {dataset_name}")
    print(f"🤖 Model: {model_name}")
    print(f"📁 Input directory: {config['input_dir']}")
    print(f"📊 Found {count} files to process")
    print(f"📝 Log directory: {log_dir}")
    
    # 确保Log directory存在
    os.makedirs(log_dir, exist_ok=True)
    
    for name in name_list:
        # 配置参数
        name = name.split('.')[0]
        
        # 根据DatasetType选择日志文件命名格式和函数名
        if dataset_name == 'syGus_code2inv' or dataset_name == 'sv-comp_autospec' or dataset_name == 'oopsla_hola' or dataset_name == 'syGus_mask':
            log_path = os.path.join(log_dir, f'foo{name}.log')
            function_name = f'foo{name}'
        elif dataset_name == 'loop':
            log_path = os.path.join(log_dir, f'{name}.log')
            function_name = name
        elif dataset_name == 'numer-s':
            log_path = os.path.join(log_dir, f'hoo{name}.log')
            function_name = f'hoo{name}'
        else:
            log_path = os.path.join(log_dir, f'main{name}.log')
            function_name = f'main{name}'

        
        if os.path.exists(log_path):
            print(f"⏭️ Skip {name}，Log file already exists")
            continue

        print(f"🔄 Processing file: {name}")

        # 创建配置对象
        config_obj = MainConfig(
            root_dir=config['root_dir'],
            function_name=function_name,
            **config['config_params']
        )

        # 获取预条件字符串，并封装为字典传入处理器
        condition_str = config['preconditions'].get(function_name, 'emp')
        preconditions = {function_name: condition_str}

        try:
            # 执行分析
            processor = FunctionProcessor(config_obj, preconditions, model_name)
            processor.run_analysis()
            first_pass = processor.first_pass

            if first_pass is None:
                print(f"⚠️ {name}: Analysis returned None, SkipStatistics")
                continue
            
            if 'syntax' not in first_pass or 'valid' not in first_pass or 'satisfy' not in first_pass:
                print(f"⚠️ {name}: Analysis Result lacks necessary keys, SkipStatistics")
                continue
            
            # StatisticsResult
            syntax_score = first_pass['syntax']
            valid_score = first_pass['valid']
            satisfy_score = first_pass['satisfy']
            
            if syntax_score == 1:
                syntax_count[1] += 1
                syntax_count[3] += 1
                syntax_count[5] += 1
            elif syntax_score <= 3:
                syntax_count[3] += 1
                syntax_count[5] += 1
            elif syntax_score <= 5:
                syntax_count[5] += 1
                
            
            if valid_score == 1:
                valid_count[1] += 1
                valid_count[3] += 1
                valid_count[5] += 1
            elif valid_score <= 3:
                valid_count[3] += 1
                valid_count[5] += 1
            elif valid_score <= 5:
                valid_count[5] += 1
            
            if satisfy_score == 1:
                satisfy_count[1] += 1
                satisfy_count[3] += 1
                satisfy_count[5] += 1
            elif satisfy_score <= 3:
                satisfy_count[3] += 1
                satisfy_count[5] += 1
            elif satisfy_score <= 5:
                satisfy_count[5] += 1
            
            print(f"✅ {name}: syntax={syntax_score}, valid={valid_score}, satisfy={satisfy_score}")
            
        except Exception as e:
            print(f"❌ {name}: 处理过程中发生Error: {str(e)}")
            continue

    # OutputStatisticsResult
    print("\n" + "="*60)
    print(f"📊 {dataset_name} DatasetTestResultStatistics (模型: {model_name})")
    print("="*60)
    print(f"Total files: {count}")
    print(f"syntax_count: {syntax_count}")
    print(f"valid_count: {valid_count}")
    print(f"satisfy_count: {satisfy_count}")
    
    if count > 0:
        print(f"\n📈 Pass@1 Statistics:")
        print(f"  syntax_rate: {syntax_count[1]/count:.2%}")
        print(f"  valid_rate: {valid_count[1]/count:.2%}")
        print(f"  satisfy_rate: {satisfy_count[1]/count:.2%}")
        
        print(f"\n📈 Pass@3 Statistics:")
        print(f"  syntax_rate: {syntax_count[3]/count:.2%}")
        print(f"  valid_rate: {valid_count[3]/count:.2%}")
        print(f"  satisfy_rate: {satisfy_count[3]/count:.2%}")
        
        print(f"\n📈 Pass@5 Statistics:")
        print(f"  syntax_rate: {syntax_count[5]/count:.2%}")
        print(f"  valid_rate: {valid_count[5]/count:.2%}")
        print(f"  satisfy_rate: {satisfy_count[5]/count:.2%}")
    
    return {
        'dataset': dataset_name,
        'model': model_name,
        'total_files': count,
        'syntax_count': syntax_count,
        'valid_count': valid_count,
        'satisfy_count': satisfy_count
    }

def main():
    """主函数"""
    print("🚀 循环不变量Test脚本启动")
    print("="*60)
    
    # 在这里修改您要Test的Dataset和模型Name
    DATASET_NAME = 'NLA_addition'  # 可选: 'NLA_lipus', 'syGus_code2inv'
    MODEL_NAME = 'claude-3-7-sonnet-20250219'         # 可选: 'gpt-4o', 'deepseek-V3' 等
    
    print(f"📋 Test Config:")
    print(f"  Dataset: {DATASET_NAME}")
    print(f"  Model: {MODEL_NAME}")
    print(f"  Log directory: ./log/{DATASET_NAME}/{MODEL_NAME}")
    
    # Test指定Dataset
    test_dataset(DATASET_NAME, MODEL_NAME)
    
    print("\n🎉 Test Done！")
    print(f"📊 Results saved to: ./log/{DATASET_NAME}/{MODEL_NAME}/")

if __name__ == '__main__':
    main() 