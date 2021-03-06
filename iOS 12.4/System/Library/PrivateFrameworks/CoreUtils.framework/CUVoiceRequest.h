/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSSpeechRequest;

@interface CUVoiceRequest : NSObject {

	unsigned _flags;
	/*^block*/id _completion;
	id _owner;
	VSSpeechRequest* _speechRequest;

}

@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) unsigned flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) id owner;                                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end

