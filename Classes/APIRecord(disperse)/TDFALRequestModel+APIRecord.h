//
//  TDFALRequestModel+APIRecord.h
//  TDFScreenDebuggerExample
//
//  Created by 开不了口的猫 on 2017/9/15.
//  Copyright © 2017年 TDF. All rights reserved.
//

#import <TDFAPILogger/TDFAPILogger.h>
#import "TDFSDAPIRecordCharacterizationProtocol.h"
#import "TDFSDMessageRemindProtocol.h"

@interface TDFALRequestModel (APIRecord) <TDFSDAPIRecordCharacterizationProtocol, TDFSDMessageRemindProtocol>

@end
