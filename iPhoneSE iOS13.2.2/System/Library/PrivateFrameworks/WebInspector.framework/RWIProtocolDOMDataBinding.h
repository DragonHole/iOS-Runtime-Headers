/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * binding; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * type; 
+(id)safe_initWithBinding:(id)arg1 value:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)binding;
-(void)setBinding:(NSString *)arg1 ;
-(id)initWithBinding:(id)arg1 value:(id)arg2 ;
@end

