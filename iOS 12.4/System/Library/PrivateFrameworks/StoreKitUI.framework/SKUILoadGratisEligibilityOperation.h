/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSArray, SKUIClientContext, NSObject;

@interface SKUILoadGratisEligibilityOperation : NSOperation {

	NSArray* _bundleIDs;
	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2 ;
-(id)outputBlock;
-(id)_bodyData;
-(id)init;
-(void)main;
@end

