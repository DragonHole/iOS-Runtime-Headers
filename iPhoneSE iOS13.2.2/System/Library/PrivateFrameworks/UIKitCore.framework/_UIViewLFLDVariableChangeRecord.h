/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSISVariable, UIView;

@interface _UIViewLFLDVariableChangeRecord : _UIViewLFLDChangeRecord {

	NSISVariable* _variable;
	double _value;
	UIView* _variableDelegate;

}

@property (nonatomic,readonly) NSISVariable * variable;                //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) double value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) UIView * variableDelegate;              //@synthesize variableDelegate=_variableDelegate - In the implementation block
-(id)description;
-(double)value;
-(NSISVariable *)variable;
-(id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2 ;
-(UIView *)variableDelegate;
@end

