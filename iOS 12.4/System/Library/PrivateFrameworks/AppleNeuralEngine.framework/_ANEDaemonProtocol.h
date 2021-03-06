/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ANEDaemonProtocol
@required
-(void)compileModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned)arg4 withReply:(/*^block*/id)arg5;
-(void)loadModel:(id)arg1 sandboxExtension:(id)arg2 options:(id)arg3 qos:(unsigned)arg4 withReply:(/*^block*/id)arg5;
-(void)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned)arg3 withReply:(/*^block*/id)arg4;

@end

