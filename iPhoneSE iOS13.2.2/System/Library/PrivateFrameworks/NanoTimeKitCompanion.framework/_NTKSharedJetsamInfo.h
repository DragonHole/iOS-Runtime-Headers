/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSMapTable, NSLock;

@interface _NTKSharedJetsamInfo : NSObject {

	NSMapTable* _fetchers;
	NSLock* _fetchersLock;
	int _pid;

}
+(id)sharedJetsamInfo;
-(id)init;
-(void)unregister:(id)arg1 ;
-(BOOL)getInfoFor:(id)arg1 into:(jetsam_info*)arg2 ;
-(BOOL)resetIntervalFor:(id)arg1 ;
@end

