/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSError;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _cardAdded;
	NSError* _error;

}

@property (assign,nonatomic) BOOL cardAdded;               //@synthesize cardAdded=_cardAdded - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)setCardAdded:(BOOL)arg1 ;
-(BOOL)cardAdded;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

