/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKBusinessChatContext.h>

@class PKPaymentPass, NSString;

@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext> {

	PKPaymentPass* _paymentPass;
	long long _intent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPaymentPass:(id)arg1 intent:(long long)arg2 ;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
-(BOOL)requiresAuthorization;
-(id)bodyText;
@end

