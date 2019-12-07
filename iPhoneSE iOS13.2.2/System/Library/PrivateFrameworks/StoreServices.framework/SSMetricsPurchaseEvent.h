/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * transactionIdentifier; 
-(id)init;
-(void)setResponseEndTime:(double)arg1 ;
-(double)responseEndTime;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setResponseStartTime:(double)arg1 ;
-(double)responseStartTime;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)addFieldsFromPurchaseResponse:(id)arg1 ;
@end
