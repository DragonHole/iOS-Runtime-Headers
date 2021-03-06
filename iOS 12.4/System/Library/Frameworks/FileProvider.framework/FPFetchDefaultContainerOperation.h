/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class NSString, NSFileProviderDomain;

@interface FPFetchDefaultContainerOperation : FPActionOperation {

	NSString* _appName;
	NSString* _appIdentifier;
	NSFileProviderDomain* _domain;
	/*^block*/id _fetchCompletionBlock;

}

@property (nonatomic,copy) id fetchCompletionBlock;              //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
-(void)mainWithExtensionProxy:(id)arg1 ;
-(id)initForApplicationProxy:(id)arg1 provider:(id)arg2 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(id)fetchCompletionBlock;
@end

