/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface CNDonationExtensionRequestHandler : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)userDidRejectDonatedValue:(id)arg1 ;
-(unsigned long long)donationVersioningNumber;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
@end

