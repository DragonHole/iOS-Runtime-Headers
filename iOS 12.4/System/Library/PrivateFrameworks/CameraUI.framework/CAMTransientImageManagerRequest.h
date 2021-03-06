/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CAMTransientImageManagerRequest : NSObject {

	BOOL _isCanceled;
	BOOL _isFinished;
	NSString* _uuid;
	/*^block*/id _resultHandler;

}

@property (nonatomic,copy) NSString * uuid;                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) id resultHandler;               //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;              //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) BOOL isFinished;              //@synthesize isFinished=_isFinished - In the implementation block
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(BOOL)isCanceled;
-(void)setIsCanceled:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)uuid;
-(BOOL)isFinished;
@end

