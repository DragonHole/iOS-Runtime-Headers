/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INPaymentRecord;


@protocol INSendPaymentIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INPaymentRecord * paymentRecord; 
@required
-(long long)code;
-(INPaymentRecord *)paymentRecord;
-(void)setPaymentRecord:(id)arg1;

@end

