//
//  Model.h
//  Runtime字典转模型
//
//  Created by 抬头看见柠檬树 on 2017/1/28.
//  Copyright © 2017年 csip. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ModelTwo.h"

@interface Model : NSObject

@property (nonatomic,strong) NSString *key1;

@property (nonatomic,strong) NSString *key2;

@property (nonatomic,strong) NSString *key3;

@property (nonatomic,strong) ModelTwo *modelTwo;

@end
