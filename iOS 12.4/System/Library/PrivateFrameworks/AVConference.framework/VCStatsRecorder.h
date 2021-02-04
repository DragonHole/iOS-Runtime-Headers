/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCStatsRecorder : NSObject {

	opaque_pthread_rwlock_t _stateRWLock;
	SCD_Struct_VC54 _localStats[128];
	unsigned short _currentLocalStatsIndex;
	unsigned _uplinkServerStatsByteUsed;

}
-(int)serverStatsSizeInByteForUplink:(BOOL)arg1 connection:(id)arg2 ;
-(void)updateSessionStats:(unsigned short)arg1 connection:(id)arg2 totalPacketSent:(unsigned)arg3 totalPacketReceived:(unsigned)arg4 ;
-(void)getLocalStats:(unsigned short)arg1 localSessionStats:(SCD_Struct_VC54*)arg2 ;
-(SCD_Struct_VC54)getMostRecentLocalStats;
-(id)init;
-(void)dealloc;
@end
