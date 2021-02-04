/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUInstallationConstraintMonitorBase.h>
#import <libobjc.A.dylib/SUNetworkObserver.h>

@class SUNetworkMonitor, NSString;

@interface SUInstallationConstraintMonitorNetwork : SUInstallationConstraintMonitorBase <SUNetworkObserver> {

	SUNetworkMonitor* _queue_networkMonitor;
	BOOL _queue_hasNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2 ;
-(unsigned long long)unsatisfiedConstraints;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 networkMonitor:(id)arg3 ;
-(void)_queue_networkDidChange;
-(id)initOnQueue:(id)arg1 withDownload:(id)arg2 ;
-(void)dealloc;
@end
