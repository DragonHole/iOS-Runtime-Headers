/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface PLBatterySaverWatcher : NSObject {

	NSHashTable* _delegates;

}

@property (nonatomic,readonly) BOOL batterySaverModeEnabled; 
+(id)sharedBatterySaverWatcher;
-(BOOL)batterySaverModeEnabled;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)dealloc;
@end
