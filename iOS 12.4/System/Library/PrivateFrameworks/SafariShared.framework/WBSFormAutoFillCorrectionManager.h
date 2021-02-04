/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFormAutoFillCorrectionManagerDelegate;
@class WBSFormAutoFillClassificationToCorrectionsTransformer;

@interface WBSFormAutoFillCorrectionManager : NSObject {

	WBSFormAutoFillClassificationToCorrectionsTransformer* _classificationToCorrectionsTransformer;
	id<WBSFormAutoFillCorrectionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSFormAutoFillCorrectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_correctionsStore;
-(void)_setCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 ;
-(id)_feedbackProcessor;
-(void)getCorrectionsForFormFieldFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCorrectionSet:(id)arg1 ;
-(void)setDelegate:(id<WBSFormAutoFillCorrectionManagerDelegate>)arg1 ;
-(id<WBSFormAutoFillCorrectionManagerDelegate>)delegate;
@end
