/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NviAssetsProvider <NSObject>
@property (nonatomic,readonly) NSString * nviConfigRoot; 
@property (nonatomic,readonly) NSString * hepConfigFilepath; 
@optional
-(float)dirAzimuthEMAParam;
-(float)vadSoSThresholdInMs;
-(float)vadSoSConvergenceInMs;
-(id)kwdConfigPath;
-(id)kwdThresholdsMap;
-(BOOL)isDirectionalityAvailable;
-(float)dirAzimuthMatchThreshold;
-(BOOL)isAsdAvailable;
-(id)anchorAsdConfigFile;
-(id)anchorAsdConfigRoot;
-(id)payloadAsdFrontendConfigFile;
-(id)payloadAsdFrontendConfigRoot;
-(id)payloadAsdModelPath;
-(NSString *)nviConfigRoot;
-(NSString *)hepConfigFilepath;

@required
-(id)init;
-(id)initWithTaskIdentifier:(id)arg1;
-(BOOL)isDirectionalityLoggingEnabled;
-(id)signalProvidersMapForContext:(id)arg1;
-(id)signalProviderToDatasourceMap;
-(BOOL)isSignalProviderDisabledInCFPrefs:(unsigned long long)arg1;

@end

