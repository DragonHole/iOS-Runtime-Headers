/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDQueryServerDelegate <HDTaskServerDelegate>
@required
-(void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(/*^block*/id)arg3;
-(id)readAuthorizationStatusForQueryServer:(id)arg1 type:(id)arg2 error:(id*)arg3;
-(void)queryServer:(id)arg1 shouldStartWithCompletion:(/*^block*/id)arg2;
-(void)queryServerDidFinish:(id)arg1;
-(unsigned)clientSDKVersionForQueryServer:(id)arg1;

@end

