/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneClient.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSceneHost;
@class NSString, FBSSceneSettings, FBSSceneClientSettings, NSMutableSet, NSSet;

@interface SBUIScene : NSObject <FBSceneClient, BSDescriptionProviding> {

	BOOL _valid;
	NSString* _identifier;
	id<FBSceneHost> _sceneHost;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	NSMutableSet* _layers;

}

@property (copy) FBSSceneSettings * settings;                           //@synthesize settings=_settings - In the implementation block
@property (copy) FBSSceneClientSettings * clientSettings;               //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;               //@synthesize valid=_valid - In the implementation block
@property (nonatomic,copy,readonly) NSSet * layers;                     //@synthesize layers=_layers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientSettings:(FBSSceneClientSettings *)arg1 ;
-(void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3 ;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)host:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(FBSSceneSettings *)settings;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(FBSSceneClientSettings *)clientSettings;
-(NSSet *)layers;
-(id)initWithIdentifier:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(BOOL)isValid;
-(void)sendActions:(id)arg1 ;
@end

