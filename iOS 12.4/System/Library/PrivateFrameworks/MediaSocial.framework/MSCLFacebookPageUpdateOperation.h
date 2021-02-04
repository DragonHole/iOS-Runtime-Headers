/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SKUIMediaSocialAuthor;

@interface MSCLFacebookPageUpdateOperation : SSVComplexOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _pageIdentifier;
	SKUIMediaSocialAuthor* _author;
	/*^block*/id _outputBlock;

}

@property (nonatomic,copy,readonly) NSString * pageIdentifier;                   //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
@property (nonatomic,copy,readonly) SKUIMediaSocialAuthor * author;              //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) id outputBlock;                                       //@synthesize outputBlock=_outputBlock - In the implementation block
-(SKUIMediaSocialAuthor *)author;
-(NSString *)pageIdentifier;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithPageIdentifier:(id)arg1 forAuthor:(id)arg2 ;
-(void)main;
@end
