/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTDifferentialPrivacyRecorder.h>

@protocol AVTDifferentialPrivacyRecorder
@required
-(void)recordString:(id)arg1 forKey:(id)arg2;
-(void)recordNumber:(id)arg1 forKey:(id)arg2;

@end


@class NSMutableDictionary;

@interface AVTDifferentialPrivacyRecorder : NSObject <AVTDifferentialPrivacyRecorder> {

	/*^block*/id _stringRecorderProvider;
	/*^block*/id _numRecorderProvider;
	NSMutableDictionary* _stringRecorders;
	NSMutableDictionary* _numRecorders;

}

@property (nonatomic,copy,readonly) id stringRecorderProvider;                     //@synthesize stringRecorderProvider=_stringRecorderProvider - In the implementation block
@property (nonatomic,copy,readonly) id numRecorderProvider;                        //@synthesize numRecorderProvider=_numRecorderProvider - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * stringRecorders;              //@synthesize stringRecorders=_stringRecorders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * numRecorders;                 //@synthesize numRecorders=_numRecorders - In the implementation block
+(/*^block*/id)makeCachingStringRecorderProvider:(/*^block*/id)arg1 ;
+(/*^block*/id)makeCachingNumRecorderProvider:(/*^block*/id)arg1 ;
-(void)recordString:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStringRecorderProvider:(/*^block*/id)arg1 numericDataRecorderProvider:(/*^block*/id)arg2 ;
-(id)stringRecorderProvider;
-(id)numRecorderProvider;
-(void)recordNumber:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)stringRecorders;
-(NSMutableDictionary *)numRecorders;
-(id)init;
@end

