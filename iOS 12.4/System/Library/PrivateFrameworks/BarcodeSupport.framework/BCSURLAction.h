/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BarcodeSupport/BCSAction.h>

@class NSArray, LSApplicationProxy, NSURL, SecureChannelAction;

@interface BCSURLAction : BCSAction {

	NSArray* _appLinks;
	LSApplicationProxy* _applicationProxy;
	BOOL _deviceDataIsUnavailable;
	NSURL* _appStoreSearchURLForUnsupportedScheme;
	SecureChannelAction* _scAction;
	BOOL _hasPreferredAppLink;

}

@property (nonatomic,readonly) LSApplicationProxy * targetApplication; 
@property (nonatomic,readonly) BOOL mustOpenAppLinkInApp; 
@property (nonatomic,readonly) unsigned long long appLinkCount; 
@property (nonatomic,readonly) BOOL hasPreferredAppLink;                            //@synthesize hasPreferredAppLink=_hasPreferredAppLink - In the implementation block
-(LSApplicationProxy *)targetApplication;
-(void)performDefaultAction;
-(void)performAction;
-(id)urlThatCanBeOpened;
-(id)actionPickerItems;
-(id)localizedDefaultActionDescription;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(id)initWithData:(id)arg1 codePayload:(id)arg2 ;
-(void)determineActionabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)debugDescriptionExtraInfoDictionary;
-(id)localizedDefaultActionTitle;
-(BOOL)canSkipUnlock;
-(unsigned long long)appLinkCount;
-(BOOL)mustOpenAppLinkInApp;
-(void)performDefaultActionWithFBOptions:(id)arg1 ;
-(BOOL)hasPreferredAppLink;
-(BOOL)_hasSecureChannelAction;
-(id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(BOOL)arg3 ;
-(id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1 ;
-(BOOL)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isCodeFromQRScannerInCamera;
-(BOOL)_shouldOpenInAppForAppLink:(id)arg1 ;
-(BOOL)_shouldBlockHandlingURL:(id)arg1 ;
-(id)url;
@end
