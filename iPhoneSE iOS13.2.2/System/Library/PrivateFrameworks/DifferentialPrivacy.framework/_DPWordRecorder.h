/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DPDataRecorder_DPDataRecorderKeyProperties;
@interface _DPWordRecorder : NSObject {

	unsigned long long _wordFragmentWidth;
	id<_DPDataRecorder><_DPDataRecorderKeyProperties> _recorder;

}

@property (nonatomic,readonly) id<_DPDataRecorder><_DPDataRecorderKeyProperties> recorder;              //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,readonly) unsigned long long wordFragmentWidth;                                    //@synthesize wordFragmentWidth=_wordFragmentWidth - In the implementation block
-(id)init;
-(id)description;
-(id)initWithKey:(id)arg1 ;
-(BOOL)record:(id)arg1 ;
-(unsigned long long)wordFragmentWidth;
-(id<_DPDataRecorder><_DPDataRecorderKeyProperties>)recorder;
-(id)initWithKey:(id)arg1 databaseDirectoryPath:(id)arg2 readOnly:(BOOL)arg3 ;
@end

