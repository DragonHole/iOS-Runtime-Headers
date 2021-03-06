/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject {

	MPCPlayerResponse* _response;
	MPModelGenericObject* _metadataObject;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;              //@synthesize metadataObject=_metadataObject - In the implementation block
-(MPModelGenericObject *)metadataObject;
-(id)initWithModelGenericObject:(id)arg1 response:(id)arg2 ;
-(MPCPlayerResponse *)response;
-(id)remove;
@end

