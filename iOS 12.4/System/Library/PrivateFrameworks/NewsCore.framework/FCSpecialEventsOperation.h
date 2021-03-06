/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, FCSpecialEventsOperationResult, NSError;

@interface FCSpecialEventsOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	FCSpecialEventsOperationResult* _specialEventsResult;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;

}

@property (retain) FCSpecialEventsOperationResult * specialEventsResult;              //@synthesize specialEventsResult=_specialEventsResult - In the implementation block
@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                                //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                         //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)catchUpCompletionHandler;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(FCSpecialEventsOperationResult *)specialEventsResult;
-(void)setSpecialEventsResult:(FCSpecialEventsOperationResult *)arg1 ;
-(void)_checkShouldShowBreakingNewsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(FCCloudContext *)context;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

