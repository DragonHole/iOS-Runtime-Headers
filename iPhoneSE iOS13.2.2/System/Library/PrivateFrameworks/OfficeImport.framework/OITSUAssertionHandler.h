/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OITSUAssertionHandler : NSObject
+(void)simulateCrashWithMessage:(id)arg1 ;
+(id)performBlockIgnoringAssertions:(/*^block*/id)arg1 ;
+(void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(BOOL)arg4 description:(const char*)arg5 ;
+(void)logBacktraceThrottled;
+(id)p_performBlockIgnoringAssertions:(/*^block*/id)arg1 onlyFatal:(BOOL)arg2 ;
+(void)logBacktraceWithCallStackSymbols:(id)arg1 ;
+(id)performBlockIgnoringFatalAssertions:(/*^block*/id)arg1 ;
+(int)_atomicIncrementAssertCount;
+(void)logBacktrace;
@end

