/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol CellularPlanVinylTest;
@class NSXPCListener, NSMutableArray, NSString;

@interface CellularPlanVinylTestXPCServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* fXpcListener;
	NSMutableArray* fXpcConnections;
	id<CellularPlanVinylTest> fDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(dispatch_queue_sRef)arg1 andDelegate:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

