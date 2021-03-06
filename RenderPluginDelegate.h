/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/pokemongo-Structs.h>
#import <pokemongo/RenderPluginDelegate.h>

@protocol RenderPluginDelegate <LifeCycleListener,NSObject>
@optional
-(void)onFrameResolved;
-(void)onBeforeMainDisplaySurfaceRecreate:(RenderingSurfaceParamsRef)arg1;
-(void)onAfterMainDisplaySurfaceRecreate;

@required
-(void)mainDisplayInited:(UnityDisplaySurfaceBase*)arg1;

@end


@class NSString;

@interface RenderPluginDelegate : NSObject <RenderPluginDelegate> {

	UnityDisplaySurfaceBase* mainDisplaySurface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mainDisplayInited:(UnityDisplaySurfaceBase*)arg1 ;
@end

