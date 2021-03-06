/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TVRCMRTelevisionWrapper, _TVRCRPCompanionLinkClientWrapper, _TVRCHMServiceWrapper, _TVRXDevice;

@interface _TVRDeviceAggregate : NSObject {

	_TVRCMRTelevisionWrapper* _mediaRemote;
	_TVRCRPCompanionLinkClientWrapper* _rapport;
	_TVRCHMServiceWrapper* _homeKit;
	_TVRXDevice* _publicDevice;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * mediaRemote;                   //@synthesize mediaRemote=_mediaRemote - In the implementation block
@property (nonatomic,retain) _TVRCRPCompanionLinkClientWrapper * rapport;              //@synthesize rapport=_rapport - In the implementation block
@property (nonatomic,retain) _TVRCHMServiceWrapper * homeKit;                          //@synthesize homeKit=_homeKit - In the implementation block
@property (nonatomic,retain) _TVRXDevice * publicDevice;                               //@synthesize publicDevice=_publicDevice - In the implementation block
-(BOOL)isEmpty;
-(void)setRapport:(_TVRCRPCompanionLinkClientWrapper *)arg1 ;
-(id)bestImpl;
-(_TVRCMRTelevisionWrapper *)mediaRemote;
-(void)setMediaRemote:(_TVRCMRTelevisionWrapper *)arg1 ;
-(_TVRCRPCompanionLinkClientWrapper *)rapport;
-(_TVRCHMServiceWrapper *)homeKit;
-(void)setHomeKit:(_TVRCHMServiceWrapper *)arg1 ;
-(_TVRXDevice *)publicDevice;
-(void)setPublicDevice:(_TVRXDevice *)arg1 ;
@end

