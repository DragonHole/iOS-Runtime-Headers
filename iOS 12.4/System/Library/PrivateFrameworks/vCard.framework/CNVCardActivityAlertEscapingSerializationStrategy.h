/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardActivityAlertAbstractSerializationStrategy.h>

@class NSString;

@interface CNVCardActivityAlertEscapingSerializationStrategy : NSObject <CNVCardActivityAlertAbstractSerializationStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializeString:(id)arg1 ;
+(BOOL)strategyWouldAlterString:(id)arg1 ;
+(id)charactersToTriggerStrategy;
+(id)regex;
@end

