/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSData;

@interface ATXApp2VecMapping : NSObject {

	NSData* _data;
	header_s _hdr;
	const unsigned short* _matrix;
	const unsigned short* _endOfMatrix;
	CFBurstTrieRef _idxForBundleId;

}

@property (nonatomic,readonly) unsigned long long vectorLength; 
@property (nonatomic,readonly) unsigned long long appCount; 
-(unsigned long long)appCount;
-(unsigned long long)vectorLength;
-(BOOL)getVectorForBundleId:(id)arg1 into:(float*)arg2 ;
-(BOOL)getVectorForBundleIdWithGenreBackup:(id)arg1 into:(float*)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

