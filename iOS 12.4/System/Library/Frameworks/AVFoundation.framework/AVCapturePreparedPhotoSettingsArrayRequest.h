/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {

	unsigned long long _requestID;
	NSArray* _photoSettingsArray;
	/*^block*/id _completionHandler;
	BOOL _completed;

}

@property (readonly) unsigned long long requestID; 
@property (readonly) NSArray * photoSettingsArray; 
@property (readonly) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
+(id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setRequestID:(unsigned long long)arg1 ;
-(NSArray *)photoSettingsArray;
-(unsigned long long)requestID;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
@end
