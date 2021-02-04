/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPKTransitAppletHistoryFetcherDelegate.h>
#import <libobjc.A.dylib/NPKExpressPassControllerDelegate.h>

@protocol NPKExpressTransitInterfaceControllerDelegate, NPKExpressTransitInterfaceControllerDataSource, OS_dispatch_source;
@class NSObject, NPKTransitAppletHistoryFetcher, PKPass, PKPaymentApplication, NPKExpressPassController, PKTransitAppletState, NSString;

@interface NPKExpressTransitInterfaceController : NSObject <NPKTransitAppletHistoryFetcherDelegate, NPKExpressPassControllerDelegate> {

	id<NPKExpressTransitInterfaceControllerDelegate> _delegate;
	id<NPKExpressTransitInterfaceControllerDataSource> _dataSource;
	NSObject*<OS_dispatch_source> _dismissalTimer;
	NPKTransitAppletHistoryFetcher* _appletHistoryFetcher;
	PKPass* _expressTransitPass;
	PKPaymentApplication* _expressTransitPaymentApplication;
	NPKExpressPassController* _expressPassController;
	PKTransitAppletState* _transactionStartAppletState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> dismissalTimer;                                      //@synthesize dismissalTimer=_dismissalTimer - In the implementation block
@property (nonatomic,retain) NPKTransitAppletHistoryFetcher * appletHistoryFetcher;                             //@synthesize appletHistoryFetcher=_appletHistoryFetcher - In the implementation block
@property (nonatomic,retain) PKPass * expressTransitPass;                                                       //@synthesize expressTransitPass=_expressTransitPass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * expressTransitPaymentApplication;                           //@synthesize expressTransitPaymentApplication=_expressTransitPaymentApplication - In the implementation block
@property (nonatomic,readonly) NPKExpressPassController * expressPassController;                                //@synthesize expressPassController=_expressPassController - In the implementation block
@property (nonatomic,retain) PKTransitAppletState * transactionStartAppletState;                                //@synthesize transactionStartAppletState=_transactionStartAppletState - In the implementation block
@property (assign,nonatomic,__weak) id<NPKExpressTransitInterfaceControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NPKExpressTransitInterfaceControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitAppletHistoryFetcher:(id)arg1 gotTransitAppletHistory:(id)arg2 forAppletWithAID:(id)arg3 ;
-(void)expressPassController:(id)arg1 didStartTransactionForPass:(id)arg2 ;
-(void)expressPassController:(id)arg1 didCompleteTransactionForPass:(id)arg2 ;
-(void)expressPassController:(id)arg1 didFailTransactionForPass:(id)arg2 ;
-(void)expressPassController:(id)arg1 didUpdateExpressPasses:(id)arg2 expressPassesInformation:(id)arg3 ;
-(void)_dismissExpressTransitAlert;
-(void)setTransactionStartAppletState:(PKTransitAppletState *)arg1 ;
-(PKPass *)expressTransitPass;
-(PKPaymentApplication *)expressTransitPaymentApplication;
-(void)_scheduleDismissalOfExpressTransitAlertWithTimeout:(double)arg1 ;
-(PKTransitAppletState *)transactionStartAppletState;
-(NPKTransitAppletHistoryFetcher *)appletHistoryFetcher;
-(void)setExpressTransitPass:(PKPass *)arg1 ;
-(void)setExpressTransitPaymentApplication:(PKPaymentApplication *)arg1 ;
-(NSObject*<OS_dispatch_source>)dismissalTimer;
-(BOOL)candHandleExpressEventsFromPass:(id)arg1 ;
-(void)setDismissalTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setAppletHistoryFetcher:(NPKTransitAppletHistoryFetcher *)arg1 ;
-(NPKExpressPassController *)expressPassController;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<NPKExpressTransitInterfaceControllerDelegate>)arg1 ;
-(id<NPKExpressTransitInterfaceControllerDelegate>)delegate;
-(id<NPKExpressTransitInterfaceControllerDataSource>)dataSource;
-(void)setDataSource:(id<NPKExpressTransitInterfaceControllerDataSource>)arg1 ;
@end
