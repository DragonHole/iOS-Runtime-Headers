/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@interface SXListStyle : SXJSONObject

@property (nonatomic,readonly) unsigned long long style; 
@property (nonatomic,readonly) NSString * character; 
@property (nonatomic,readonly) SXJSONArray * indices; 
@property (nonatomic,readonly) unsigned long long depth; 
-(unsigned long long)depth;
-(SXJSONArray *)indices;
-(NSString *)character;
-(unsigned long long)style;
-(unsigned long long)styleWithValue:(id)arg1 withType:(int)arg2 ;
@end
