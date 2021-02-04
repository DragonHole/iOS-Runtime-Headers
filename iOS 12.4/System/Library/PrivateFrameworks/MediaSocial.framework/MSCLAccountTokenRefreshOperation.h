/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MSCLAccountStore, SKUIMediaSocialAuthor, NSArray, NSLock;

@interface MSCLAccountTokenRefreshOperation : NSOperation {

	MSCLAccountStore* _accountStore;
	SKUIMediaSocialAuthor* _author;
	NSArray* _inputServices;
	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (retain) MSCLAccountStore * accountStore; 
@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithAuthor:(id)arg1 externalServices:(id)arg2 ;
-(void)_registerExternalDestination:(id)arg1 forServiceIdentifier:(id)arg2 accountStore:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_getExternalDestinationForServiceIdentifier:(id)arg1 accountStore:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_ssvServiceIdentifierForMSCLServiceIdentifier:(id)arg1 ;
-(MSCLAccountStore *)accountStore;
-(void)main;
-(void)setAccountStore:(MSCLAccountStore *)arg1 ;
@end
