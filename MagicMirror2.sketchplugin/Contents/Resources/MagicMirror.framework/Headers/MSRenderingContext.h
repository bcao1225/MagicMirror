//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSStyleFillRenderer, MSStyleImageRenderer, MSStylePathRenderer, MSStyleTextRenderer, NSColor, NSColorSpace, NSMutableArray;

@interface MSRenderingContext : NSObject
{
    BOOL _isDrawingReflection;
    BOOL _includeArtboardBackground;
    BOOL _disableSubpixelAliasing;
    BOOL _isExporting;
    BOOL _isExportingToBitmap;
    BOOL _isDrawingPixelated;
    BOOL _shouldFlipShadows;
    BOOL _isDrawingMask;
    BOOL _cancelled;
    BOOL _useBitmapImagesAsTransparencyLayers;
    int _internalBlendMode;
    unsigned long long _disableDrawingFillsCounter;
    unsigned long long _disableClippingFillsCounter;
    double _zoomLevel;
    NSColorSpace *_colorSpace;
    struct CGContext *_contextRef;
    NSColor *_backgroundColor;
    id _rootObject;
    double _shadowScale;
    double _backingScale;
    double _backingScaleForShadows;
    MSStylePathRenderer *_stylePathRenderer;
    MSStyleImageRenderer *_styleImageRenderer;
    MSStyleTextRenderer *_styleTextRenderer;
    MSStyleFillRenderer *_styleFillRenderer;
    struct CGContext *_savedContextRef;
    NSMutableArray *_bitmapTransparencyLayerSavedStates;
    double _alphaValue;
    struct CGPoint _scrollOrigin;
    struct CGRect _dirtyRect;
    struct CGAffineTransform _rotateFlipTransform;
    struct CGAffineTransform _totalTransform;
}

+ (id)contextWithContextRef:(struct CGContext *)arg1 colorSpace:(id)arg2 atZoomLevel:(double)arg3;
+ (unsigned long long)defaultCGContextCreateFlags;

- (id)CIContextWithSoftwareRenderer:(BOOL)arg1;
- (struct CGAffineTransform)accumulatedRotateFlipTransform;
- (struct CGAffineTransform)accumulatedTransform;
@property(nonatomic) double alphaValue; // @synthesize alphaValue=_alphaValue;
- (void)applyLayerTransform:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)applySettings:(id)arg1 withOptions:(long long)arg2 inBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)backingContext;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(nonatomic) double backingScaleForShadows; // @synthesize backingScaleForShadows=_backingScaleForShadows;
- (double)beginBitmapTransparencyLayerInRect:(struct CGRect)arg1 inheritClip:(BOOL)arg2;
- (double)beginQuartzTransparencyLayerInRect:(struct CGRect)arg1;
- (double)beginTransparencyLayer;
- (double)beginTransparencyLayerInRect:(struct CGRect)arg1;
- (double)beginTransparencyLayerInRect:(struct CGRect)arg1 inheritClip:(BOOL)arg2;
@property(retain, nonatomic) NSMutableArray *bitmapTransparencyLayerSavedStates; // @synthesize bitmapTransparencyLayerSavedStates=_bitmapTransparencyLayerSavedStates;
- (BOOL)canDrawBackgroundBlur;
- (void)cancel;
@property(readonly, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)concatTransform:(struct CGAffineTransform)arg1;
@property(nonatomic) struct CGContext *contextRef; // @synthesize contextRef=_contextRef;
- (void)dealloc;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(nonatomic) unsigned long long disableClippingFillsCounter; // @synthesize disableClippingFillsCounter=_disableClippingFillsCounter;
@property(nonatomic) unsigned long long disableDrawingFillsCounter; // @synthesize disableDrawingFillsCounter=_disableDrawingFillsCounter;
@property(nonatomic) BOOL disableSubpixelAliasing; // @synthesize disableSubpixelAliasing=_disableSubpixelAliasing;
- (unsigned long long)disableSubpixelAntialiasingFlags;
- (void)doNotClipFillsInBlock:(CDUnknownBlockType)arg1;
- (void)endBitmapTransparencyLayer:(double)arg1;
- (void)endQuartzTransparencyLayer:(double)arg1;
- (void)endTransparencyLayer:(double)arg1;
- (void)ifCondition:(BOOL)arg1 skipDrawingFillsInBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL includeArtboardBackground; // @synthesize includeArtboardBackground=_includeArtboardBackground;
- (id)initWithContextRef:(struct CGContext *)arg1 colorSpace:(id)arg2 atZoomLevel:(double)arg3;
@property(nonatomic) int internalBlendMode; // @synthesize internalBlendMode=_internalBlendMode;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL isDrawingMask; // @synthesize isDrawingMask=_isDrawingMask;
@property(nonatomic) BOOL isDrawingPixelated; // @synthesize isDrawingPixelated=_isDrawingPixelated;
@property(nonatomic) BOOL isDrawingReflection; // @synthesize isDrawingReflection=_isDrawingReflection;
@property(nonatomic) BOOL isExporting; // @synthesize isExporting=_isExporting;
@property(nonatomic) BOOL isExportingToBitmap; // @synthesize isExportingToBitmap=_isExportingToBitmap;
- (BOOL)layerIntersectsDirtyRect:(id)arg1;
- (double)multiplyAlphaBy:(double)arg1;
- (struct CGContext *)newTransparencyLayerContextForContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (void)popGraphicsState;
- (void)prepareLayerDrawing:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)pushGraphicsState;
@property(retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
@property(nonatomic) struct CGAffineTransform rotateFlipTransform; // @synthesize rotateFlipTransform=_rotateFlipTransform;
@property(nonatomic) struct CGContext *savedContextRef; // @synthesize savedContextRef=_savedContextRef;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
- (double)setAlpha:(double)arg1;
- (int)setBlendMode:(int)arg1;
@property(nonatomic) double shadowScale; // @synthesize shadowScale=_shadowScale;
@property(nonatomic) BOOL shouldFlipShadows; // @synthesize shouldFlipShadows=_shouldFlipShadows;
@property(retain, nonatomic) MSStyleFillRenderer *styleFillRenderer; // @synthesize styleFillRenderer=_styleFillRenderer;
@property(retain, nonatomic) MSStyleImageRenderer *styleImageRenderer; // @synthesize styleImageRenderer=_styleImageRenderer;
@property(retain, nonatomic) MSStylePathRenderer *stylePathRenderer; // @synthesize stylePathRenderer=_stylePathRenderer;
@property(retain, nonatomic) MSStyleTextRenderer *styleTextRenderer; // @synthesize styleTextRenderer=_styleTextRenderer;
@property(nonatomic) struct CGAffineTransform totalTransform; // @synthesize totalTransform=_totalTransform;
- (void)setUp;
@property(nonatomic) BOOL useBitmapImagesAsTransparencyLayers; // @synthesize useBitmapImagesAsTransparencyLayers=_useBitmapImagesAsTransparencyLayers;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
- (BOOL)shouldClipFills;
- (BOOL)shouldDisableSubpixelQuantization;
- (BOOL)shouldDrawFills;
- (BOOL)shouldDrawLayer:(id)arg1 withMaskingShapeGroup:(id)arg2 ignoreDirtyRect:(BOOL)arg3;
- (void)tearDown;
- (void)transparencyLayerInBlock:(CDUnknownBlockType)arg1;
- (void)transparencyLayerInRect:(struct CGRect)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)transparencyLayerInRect:(struct CGRect)arg1 mayOptimise:(BOOL)arg2 inBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) double zoomLevelForShadows;

@end

