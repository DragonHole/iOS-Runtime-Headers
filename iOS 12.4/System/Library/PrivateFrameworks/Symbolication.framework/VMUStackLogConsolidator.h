/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VMUCommonGraphInterface, VMUStackLogReader;
@class VMUDebugTimer;

@interface VMUStackLogConsolidator : NSObject {

	id<VMUCommonGraphInterface> _graph;
	id<VMUStackLogReader> _stackLogReader;
	VMUDebugTimer* _debugTimer;

}

@property (nonatomic,retain) VMUDebugTimer * debugTimer;              //@synthesize debugTimer=_debugTimer - In the implementation block
-(void)setDebugTimer:(VMUDebugTimer *)arg1 ;
-(VMUDebugTimer *)debugTimer;
-(id)stackIDsToNodesWithFilter:(/*^block*/id)arg1 ;
-(id)initWithGraph:(id)arg1 stackLogReader:(id)arg2 ;
-(id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(/*^block*/id)arg2 ;
@end
