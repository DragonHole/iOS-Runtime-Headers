/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSSPropertyValueValidator
@required
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+(id)propertiesAllowingNSNull;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
-(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
-(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
-(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
-(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

@end
