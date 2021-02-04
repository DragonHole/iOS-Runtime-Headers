/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, FCCloudContext, NSString;

@interface FCCheckArticleStatusOperation : FCOperation {

	/*^block*/id _checkStatusCompletion;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FCCloudContext* _context;
	NSString* _articleID;
	long long _resultStatus;

}

@property (nonatomic,retain) FCCloudContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * articleID;                            //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) long long resultStatus;                        //@synthesize resultStatus=_resultStatus - In the implementation block
@property (copy) id checkStatusCompletion;                                  //@synthesize checkStatusCompletion=_checkStatusCompletion - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultStatus:(long long)arg1 ;
-(id)checkStatusCompletion;
-(long long)resultStatus;
-(id)initWithContext:(id)arg1 articleID:(id)arg2 ;
-(void)setCheckStatusCompletion:(id)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(FCCloudContext *)context;
@end
