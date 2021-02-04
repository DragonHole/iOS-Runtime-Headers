/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SKUIRedeemStepDelegate;
@class SKUIClientContext, NSOperationQueue, SKUIRedeemConfiguration;

@interface SKUIRedeemStepViewController : UIViewController {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _operationQueue;
	SKUIRedeemConfiguration* _configuration;
	id<SKUIRedeemStepDelegate> _redeemStepDelegate;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPassbookLearnMore; 
@property (assign,nonatomic,__weak) id<SKUIRedeemStepDelegate> redeemStepDelegate;              //@synthesize redeemStepDelegate=_redeemStepDelegate - In the implementation block
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setRedeemStepDelegate:(id<SKUIRedeemStepDelegate>)arg1 ;
-(BOOL)shouldShowPassbookLearnMore;
-(id<SKUIRedeemStepDelegate>)redeemStepDelegate;
-(SKUIRedeemConfiguration *)configuration;
-(void)setConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
@end
