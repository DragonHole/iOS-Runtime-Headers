/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
-(id)values;
-(id)value;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isMultiValued;
-(void)setValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setValues:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

