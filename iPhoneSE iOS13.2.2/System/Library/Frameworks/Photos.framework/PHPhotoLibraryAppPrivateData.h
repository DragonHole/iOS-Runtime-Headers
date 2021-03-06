/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLAppPrivateData;

@interface PHPhotoLibraryAppPrivateData : NSObject {

	PLAppPrivateData* _impl;

}

@property (retain) PLAppPrivateData * impl;              //@synthesize impl=_impl - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
-(id)debugDescription;
-(void)invalidate;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(PLAppPrivateData *)impl;
-(void)setImpl:(PLAppPrivateData *)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
@end

