/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class WFVariable;

@interface WFVariableEditingContext : NSObject {

	BOOL _editingVariable;
	WFVariable* _variable;
	NSRange _range;

}

@property (nonatomic,readonly) WFVariable * variable;              //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) BOOL editingVariable;               //@synthesize editingVariable=_editingVariable - In the implementation block
+(id)newWithVariable:(id)arg1 range:(NSRange)arg2 editingVariable:(BOOL)arg3 ;
-(WFVariable *)variable;
-(NSRange)range;
-(BOOL)editingVariable;
@end
