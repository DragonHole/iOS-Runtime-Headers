/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * data; 
@property (assign,nonatomic) int identifier; 
-(int)identifier;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
@end

