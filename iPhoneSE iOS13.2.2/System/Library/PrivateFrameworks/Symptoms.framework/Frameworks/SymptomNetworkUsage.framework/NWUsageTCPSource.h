/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageSource.h>

@class NSDictionary;

@interface NWUsageTCPSource : NWUsageSource {

	updater_nstat_msg_src_update_tcp _nstatTCPUpdate;
	NSDictionary* _lookupResults;

}
-(id)createSnapshot:(int)arg1 ;
-(BOOL)updateWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(id)initWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(void)deriveAttribution:(id)arg1 ;
@end
