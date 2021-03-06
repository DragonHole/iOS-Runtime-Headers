/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncStateObserverInterface.h>

@protocol PSYSyncStateObserverInterface;
@class NSString;

@interface PSYSyncStateObserverExportedObject : NSObject <PSYSyncStateObserverInterface> {

	id<PSYSyncStateObserverInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYSyncStateObserverInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PSYSyncStateObserverInterface>)delegate;
-(void)setDelegate:(id<PSYSyncStateObserverInterface>)arg1 ;
-(oneway void)didUpdateSyncForPairingID:(id)arg1 ;
@end

