/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MPMusicPlayerQueueTransaction : NSObject {

	long long _state;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) id identifier; 
-(id)identifier;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)completion;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
@end

