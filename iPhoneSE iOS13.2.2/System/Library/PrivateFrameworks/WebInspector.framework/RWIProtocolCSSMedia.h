/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSMedia : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long source; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (assign,nonatomic) int sourceLine; 
+(id)safe_initWithText:(id)arg1 source:(long long)arg2 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(void)setSourceLine:(int)arg1 ;
-(int)sourceLine;
-(id)initWithText:(id)arg1 source:(long long)arg2 ;
@end
