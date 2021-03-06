/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray;

@interface AVAudioSessionRouteDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * siriRemoteInputIdentifier; 
@property (readonly) unsigned long long siriInputSource; 
@property (readonly) NSArray * inputs; 
@property (readonly) NSArray * outputs; 
-(RouteDescriptionImpl*)privateGetImplementation;
-(id)initWithRawDescription:(id)arg1 owningSession:(id)arg2 ;
-(NSString *)siriRemoteInputIdentifier;
-(unsigned long long)siriInputSource;
-(BOOL)isEqualToRoute:(id)arg1 ;
-(NSArray *)outputs;
-(NSArray *)inputs;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

