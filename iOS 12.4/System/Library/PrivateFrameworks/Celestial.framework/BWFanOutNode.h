/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWFanOutNode : BWNode {

	id* _outputsCArray;
	int _outputsCount;

}
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithFanOutCount:(int)arg1 mediaType:(unsigned)arg2 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)dealloc;
-(id)nodeType;
@end

